// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKCLOCKCOMPLICATIONCOUNT_H
#define NTKCLOCKCOMPLICATIONCOUNT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NTKClockComplicationCount : NSObject

@property (readonly, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (readonly, nonatomic) NSInteger countOnFace; // ivar: _countOnFace


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithApplicationIdentifier:(id)arg0 countOnFace:(NSInteger)arg1 ;


@end


#endif