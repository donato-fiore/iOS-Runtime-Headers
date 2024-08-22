// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NRSECUREDEVICEPROPERTYSTORE_H
#define NRSECUREDEVICEPROPERTYSTORE_H

@class NSMutableDictionary;
@protocol NSSecureCoding, NSCopying, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NRSecureDevicePropertyStore : NSObject <NSSecureCoding, NSCopying>

 {
    NSMutableDictionary *_IDToProperty;
    NSMutableDictionary *_propertyToID;
    NSObject<OS_dispatch_queue> *_dirtyQueue;
}


@property (readonly, nonatomic) BOOL dirty; // ivar: _dirty


+(BOOL)supportsSecureCoding;
+(id)classTypes;
+(id)enclosedClassTypes;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)allSecurePropertyIDs;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)securePropertyForID:(id)arg0 ;
-(id)storeSecureProperty:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)forceImportSecureProperties:(id)arg0 ;
-(void)forceWriteSecurePropertyID:(id)arg0 withValue:(id)arg1 ;
-(void)removeSecureProperty:(id)arg0 ;


@end


#endif