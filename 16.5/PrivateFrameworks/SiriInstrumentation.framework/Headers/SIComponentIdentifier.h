// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SICOMPONENTIDENTIFIER_H
#define SICOMPONENTIDENTIFIER_H


#import <Foundation/Foundation.h>


@interface SIComponentIdentifier : NSObject {
    ? componentName;
    ? uuidRepresentation;
    ? $__lazy_storage_$_uuid;
}


@property (nonatomic, readonly) NSInteger hash;


-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithName:(int)arg0 schemaUUID:(id)arg1 ;
-(id)initWithName:(int)arg0 uuid:(id)arg1 ;


@end


#endif