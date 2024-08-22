// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSWELCOMEINFORMATION_H
#define TPSWELCOMEINFORMATION_H

@class NSNumber, NSString, NSBundle;

#import <Foundation/Foundation.h>


@interface TPSWelcomeInformation : NSObject {
    NSNumber *__isHardwareWelcome;
}


@property (readonly, copy, nonatomic) NSString *collectionName;
@property (nonatomic, getter=isHardwareWelcome) BOOL hardwareWelcome;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, nonatomic) NSInteger platform; // ivar: _platform
@property (retain, nonatomic) NSBundle *stringBundle; // ivar: _stringBundle
@property (readonly, copy, nonatomic) NSString *title;


-(id)initWithPlatform:(NSInteger)arg0 stringBundle:(id)arg1 ;
-(id)localizedStringForKey:(id)arg0 ;
-(id)majorVersionString;
-(id)osString;


@end


#endif