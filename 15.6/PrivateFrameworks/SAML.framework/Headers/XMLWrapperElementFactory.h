// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XMLWRAPPERELEMENTFACTORY_H
#define XMLWRAPPERELEMENTFACTORY_H


#import <Foundation/Foundation.h>


@interface XMLWrapperElementFactory : NSObject



+(Class)elementClassByTagName:(id)arg0 ;
+(NSUInteger)elementTypeByTagName:(id)arg0 ;
+(id)sharedInstance;
+(void)initialize;
+(void)registerClass:(Class)arg0 forElementName:(id)arg1 ;
-(?)classForXMLNodeerror;


@end


#endif