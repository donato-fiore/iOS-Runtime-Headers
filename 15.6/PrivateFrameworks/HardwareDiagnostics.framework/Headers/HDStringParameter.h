// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSTRINGPARAMETER_H
#define HDSTRINGPARAMETER_H

@class NSString;
@protocol HDParameterDescription;

#import <Foundation/Foundation.h>


@interface HDStringParameter : NSObject <HDParameterDescription>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL required; // ivar: _required
@property (retain, nonatomic) NSString *summary; // ivar: _summary
@property (readonly) Class superclass;


-(BOOL)validateValue:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithSummary:(id)arg0 required:(BOOL)arg1 ;


@end


#endif