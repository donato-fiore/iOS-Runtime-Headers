// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCOLORMATRIXVIEWPOINT_H
#define PKCOLORMATRIXVIEWPOINT_H


#import <Foundation/Foundation.h>


@interface PKColorMatrixViewPoint : NSObject

@property (readonly, nonatomic) NSInteger col; // ivar: _col
@property (readonly, nonatomic) NSInteger row; // ivar: _row


+(id)pointWithRow:(NSInteger)arg0 col:(NSInteger)arg1 ;
-(id)initWithRow:(NSInteger)arg0 col:(NSInteger)arg1 ;


@end


#endif