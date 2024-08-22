// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBDOMAINATTRIBUTEMANAGERDATAPROVIDER_H
#define RBDOMAINATTRIBUTEMANAGERDATAPROVIDER_H

@class NSString, NSDictionary;
@protocol RBDomainAttributeDataProviding;

#import <Foundation/Foundation.h>


@interface RBDomainAttributeManagerDataProvider : NSObject <RBDomainAttributeDataProviding>

 {
    NSString *_path;
    NSDictionary *_rawTemplates;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDictionary:(id)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(id)templatesByDomain;
-(id)validDomains;
-(id)validationErrors;


@end


#endif