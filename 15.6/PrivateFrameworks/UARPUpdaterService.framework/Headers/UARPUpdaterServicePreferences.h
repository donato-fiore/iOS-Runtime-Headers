// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UARPUPDATERSERVICEPREFERENCES_H
#define UARPUPDATERSERVICEPREFERENCES_H

@class NSString;

#import <Foundation/Foundation.h>


@interface UARPUpdaterServicePreferences : NSObject

@property (readonly) NSString *domain; // ivar: _domain


-(id)initWithDomain:(id)arg0 ;
-(id)uuidForIdentifier:(id)arg0 serialNumber:(id)arg1 error:(*id)arg2 ;


@end


#endif