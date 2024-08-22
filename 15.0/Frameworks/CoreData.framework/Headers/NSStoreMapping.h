// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSTOREMAPPING_H
#define NSSTOREMAPPING_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NSStoreMapping : NSObject {
    NSString *_externalName;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)externalName;
-(id)initWithExternalName:(id)arg0 ;
-(void)copyValuesForReadOnlyFetch:(id)arg0 ;
-(void)dealloc;


@end


#endif