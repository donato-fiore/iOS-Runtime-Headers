// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RTTSERVICEUPDATE_H
#define RTTSERVICEUPDATE_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface RTTServiceUpdate : NSObject

@property (retain, nonatomic) NSDictionary *options; // ivar: _options
@property (retain, nonatomic) NSString *serviceUpdateType; // ivar: _serviceUpdateType


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithServiceUpdateType:(id)arg0 options:(id)arg1 ;
-(id)optionValueForKey:(id)arg0 ;


@end


#endif