// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SMUNPSDOMAINACCESSOR_H
#define SMUNPSDOMAINACCESSOR_H

@class NPSDomainAccessor;

#import <Foundation/Foundation.h>


@interface SMUNPSDomainAccessor : NSObject {
    NPSDomainAccessor *_domainAccessor;
}




-(id)initWithDomain:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)synchronize;
-(void)setBool:(BOOL)arg0 forKey:(id)arg1 ;


@end


#endif