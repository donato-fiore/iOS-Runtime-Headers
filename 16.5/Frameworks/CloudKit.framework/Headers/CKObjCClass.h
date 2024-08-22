// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKOBJCCLASS_H
#define CKOBJCCLASS_H

@class NSDictionary, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface CKObjCClass : NSObject {
    NSDictionary *_propertiesByName;
    NSArray *_sortedProperties;
}


@property (readonly, nonatomic) Class handle; // ivar: _handle
@property (readonly, nonatomic) NSString *name; // ivar: _name


+(id)classForHandle:(Class)arg0 ;
+(id)classForObject:(id)arg0 ;
-(id)allProperties;
-(id)initWithHandle:(Class)arg0 ;
-(id)propertyForName:(id)arg0 ;


@end


#endif