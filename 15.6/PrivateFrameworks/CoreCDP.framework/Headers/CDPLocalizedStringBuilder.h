// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPLOCALIZEDSTRINGBUILDER_H
#define CDPLOCALIZEDSTRINGBUILDER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CDPLocalizedStringBuilder : NSObject {
    NSString *_key;
    NSString *_table;
}




+(id)builderForKey:(id)arg0 ;
+(id)builderForKey:(id)arg0 inTable:(id)arg1 ;
-(id)addDeviceClass:(id)arg0 ;
-(id)addSecretType:(NSUInteger)arg0 ;
-(id)addUnqualifiedDeviceClass:(id)arg0 ;
-(id)currentKey;
-(id)localizedString;


@end


#endif