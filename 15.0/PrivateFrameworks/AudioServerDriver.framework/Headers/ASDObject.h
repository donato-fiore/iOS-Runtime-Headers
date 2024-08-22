// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDOBJECT_H
#define ASDOBJECT_H

@class NSMutableArray, NSArray, NSString;
@protocol OS_dispatch_queue, ASDPropertyChangedDelegate;

#import <Foundation/Foundation.h>

#import "ASDObject.h"
#import "ASDPlugin.h"

@interface ASDObject : NSObject {
    NSMutableArray *_customProperties;
    NSObject<OS_dispatch_queue> *_customPropertyQueue;
    NSUInteger _stateDumpHandler;
}


@property (readonly, nonatomic) unsigned int baseClass;
@property (readonly, nonatomic) NSArray *customProperties;
@property (readonly, weak, nonatomic) NSString *driverClassName;
@property (readonly, nonatomic) unsigned int objectClass;
@property (nonatomic) unsigned int objectID; // ivar: _objectID
@property (weak, nonatomic) ASDObject *owner; // ivar: _owner
@property (weak, nonatomic) ASDPlugin *plugin; // ivar: _plugin
@property (weak, nonatomic) NSObject<ASDPropertyChangedDelegate> *propertyChangedDelegate; // ivar: _propertyChangedDelegate


-(BOOL)getProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 qualifierData:(*void)arg2 dataSize:(*unsigned int)arg3 andData:(*void)arg4 forClient:(int)arg5 ;
-(BOOL)hasProperty:(struct AudioObjectPropertyAddress *)arg0 ;
-(BOOL)isKindOfAudioClass:(unsigned int)arg0 ;
-(BOOL)isPropertySettable:(struct AudioObjectPropertyAddress *)arg0 ;
-(BOOL)setProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 qualifierData:(*void)arg2 dataSize:(unsigned int)arg3 andData:(*void)arg4 forClient:(int)arg5 ;
-(id)diagnosticDescriptionWithIndent:(id)arg0 walkTree:(BOOL)arg1 ;
-(id)init;
-(id)initWithPlugin:(id)arg0 ;
-(unsigned int)dataSizeForProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 andQualifierData:(*void)arg2 ;
-(void)addCustomProperty:(id)arg0 ;
-(void)dealloc;
-(void)removeCustomProperty:(id)arg0 ;
-(void)setupDiagnosticStateDumpHandlerWithTreeWalk:(BOOL)arg0 ;


@end


#endif