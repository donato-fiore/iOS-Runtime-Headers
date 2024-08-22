// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDDESCRIPTION_H
#define HDDESCRIPTION_H

@class NSMutableDictionary, NSDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HDDescription : NSObject <NSCopying>

 {
    NSMutableDictionary *_parameters;
}


@property (copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSDictionary *parameters;
@property (copy, nonatomic) NSString *summary; // ivar: _summary


+(id)descriptionWithSummary:(id)arg0 ;
-(BOOL)validateAgainstValues:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithSummary:(id)arg0 ;
-(void)addParameter:(id)arg0 forName:(id)arg1 ;


@end


#endif