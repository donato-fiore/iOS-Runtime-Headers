// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _WKCUSTOMHEADERFIELDS_H
#define _WKCUSTOMHEADERFIELDS_H

@class NSString, NSDictionary, NSArray;
@protocol WKObject;

#import <Foundation/Foundation.h>


@interface _WKCustomHeaderFields : NSObject <WKObject>

 {
    ObjectStorage<API::CustomHeaderFields> _fields;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *fields;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *thirdPartyDomains;


-(id)init;
-(void)dealloc;


@end


#endif