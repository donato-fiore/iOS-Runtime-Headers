// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRINODEOBJECTID_H
#define BRINODEOBJECTID_H



#import "BRFileObjectID.h"

@interface BRInodeObjectID : BRFileObjectID {
    NSUInteger _ino;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isFolderOrAliasID;
-(BOOL)isFpfsItem;
-(NSUInteger)rawID;
-(id)asString;
-(id)description;
-(id)folderID;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileID:(NSUInteger)arg0 ;
-(unsigned char)type;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif