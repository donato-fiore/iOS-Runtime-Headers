// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBDISPLAYLISTINTERPOLATOR_H
#define RBDISPLAYLISTINTERPOLATOR_H

@class NSDictionary;
@protocol RBDisplayListContents;

#import <Foundation/Foundation.h>


@interface RBDisplayListInterpolator : NSObject {
    DisplayListInterpolator _interp;
    objc_ptr<id<RBDisplayListContents>> _from;
    objc_ptr<id<RBDisplayListContents>> _to;
    objc_ptr<NSDictionary *> _options;
}


@property (readonly, nonatomic) NSObject<RBDisplayListContents> *from;
@property (readonly, nonatomic, getter=isIdentity) BOOL identity;
@property (readonly, nonatomic) BOOL onlyFades;
@property (readonly, copy, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) NSObject<RBDisplayListContents> *to;


+(id)interpolatorWithFrom:(id)arg0 to:(id)arg1 options:(id)arg2 ;
-(id)contentsWithProgress:(float)arg0 ;
-(struct CGRect )boundingRectWithProgress:(float)arg0 ;
-(void)drawInState:(struct _RBDrawingState *)arg0 by:(float)arg1 ;


@end


#endif