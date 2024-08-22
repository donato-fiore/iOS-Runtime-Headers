// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCRATECONTROLSERVERBAG_H
#define VCRATECONTROLSERVERBAG_H

@class NSNumber, NSDictionary;

#import <Foundation/Foundation.h>


@interface VCRateControlServerBag : NSObject {
    NSNumber *_experimentGroupIndex;
    NSDictionary *_serverBagDict;
    int _operatingMode;
}


@property (readonly, retain) NSNumber *experimentGroupIndex;
@property (readonly) int experimentVersion;


+(id)groupKeysWithMode:(int)arg0 primaryKey:(id)arg1 ;
+(id)keysWithMode:(int)arg0 ;
+(id)prefixForMode:(int)arg0 ;
+(id)profileNumberKeyWithMode:(int)arg0 ;
-(BOOL)containsAllSecondaryKeysWithPrimaryKey:(id)arg0 ;
-(id)getExperimentConfig:(unsigned char)arg0 defaultValue:(id)arg1 ;
-(id)getExperimentValueForKey:(id)arg0 ;
-(id)initWithMode:(int)arg0 serverBagDict:(id)arg1 ;
-(id)valueForSecondaryKeyWithPrimaryKey:(id)arg0 secondaryKey:(id)arg1 type:(int)arg2 ;
-(id)valueForType:(int)arg0 value:(id)arg1 ;
-(void)dealloc;


@end


#endif