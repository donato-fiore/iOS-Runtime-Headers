// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCRATECONTROLSERVERBAG_H
#define VCRATECONTROLSERVERBAG_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface VCRateControlServerBag : NSObject {
    NSDictionary *_serverBagDict;
    int _operatingMode;
}




+(id)groupKeysWithMode:(int)arg0 primaryKey:(id)arg1 ;
+(id)keysWithMode:(int)arg0 ;
+(id)prefixForMode:(int)arg0 ;
+(id)profileNumberKeyWithMode:(int)arg0 ;
-(BOOL)containsAllSecondaryKeysWithPrimaryKey:(id)arg0 ;
-(id)initWithMode:(int)arg0 serverBagDict:(id)arg1 ;
-(id)valueForSecondaryKeyWithPrimaryKey:(id)arg0 secondaryKey:(id)arg1 type:(int)arg2 ;
-(void)dealloc;


@end


#endif