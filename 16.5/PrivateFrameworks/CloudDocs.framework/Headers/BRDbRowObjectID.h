// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRDBROWOBJECTID_H
#define BRDBROWOBJECTID_H



#import "BRFileObjectID.h"

@interface BRDbRowObjectID : BRFileObjectID {
    NSUInteger _rowId;
    unsigned char _type;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isFpfsItem;
-(NSUInteger)rawID;
-(id)asString;
-(id)description;
-(id)documentID;
-(id)folderID;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRowID:(NSUInteger)arg0 type:(unsigned char)arg1 ;
-(id)itemDBRowID;
-(unsigned char)type;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif