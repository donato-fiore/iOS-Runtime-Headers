// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRDOCOBJECTID_H
#define BRDOCOBJECTID_H



#import "BRFileObjectID.h"

@interface BRDocObjectID : BRFileObjectID {
    unsigned int _docID;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isDocumentID;
-(NSUInteger)rawID;
-(id)asString;
-(id)description;
-(id)documentID;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDocID:(unsigned int)arg0 ;
-(id)initWithDocIDNumber:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif