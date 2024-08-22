// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AUAUDIOUNITPROPERTY_H
#define AUAUDIOUNITPROPERTY_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AUAudioUnitProperty : NSObject <NSSecureCoding>

 {
    NSString *_key;
    unsigned int _v2propID;
    unsigned int _scope;
    unsigned int _element;
}




+(BOOL)supportsSecureCoding;
+(id)propertyWithKey:(id)arg0 ;
+(id)propertyWithKey:(id)arg0 scope:(unsigned int)arg1 element:(unsigned int)arg2 ;
+(id)propertyWithKey:(id)arg0 v2propID:(unsigned int)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(id)arg0 ;
-(id)initWithKey:(id)arg0 scope:(unsigned int)arg1 element:(unsigned int)arg2 ;
-(id)initWithKey:(id)arg0 v2propID:(unsigned int)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif