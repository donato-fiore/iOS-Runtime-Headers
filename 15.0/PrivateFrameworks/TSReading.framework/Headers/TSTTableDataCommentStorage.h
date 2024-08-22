// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTTABLEDATACOMMENTSTORAGE_H
#define TSTTABLEDATACOMMENTSTORAGE_H

@class TSDCommentStorage;


#import "TSTTableDataObject.h"

@interface TSTTableDataCommentStorage : TSTTableDataObject {
    TSDCommentStorage *mCommentStorage;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initObjectWithCommentStorage:(id)arg0 ;
-(void)dealloc;


@end


#endif