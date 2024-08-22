// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCFWRAPPER_H
#define MPCFWRAPPER_H


#import <Foundation/Foundation.h>


@interface MPCFWrapper : NSObject

@property (nonatomic, getter=isNullRef) BOOL nullRef; // ivar: _nullRef
@property (readonly, nonatomic) *void refValue; // ivar: _refValue


-(id)description;
-(id)initWithCFType:(*void)arg0 ;
-(void)dealloc;


@end


#endif