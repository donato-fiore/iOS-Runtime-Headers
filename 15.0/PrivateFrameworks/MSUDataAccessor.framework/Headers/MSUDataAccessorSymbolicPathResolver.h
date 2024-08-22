// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 15.0.0


#ifndef MSUDATAACCESSORSYMBOLICPATHRESOLVER_H
#define MSUDATAACCESSORSYMBOLICPATHRESOLVER_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>


@interface MSUDataAccessorSymbolicPathResolver : NSObject {
    NSMutableDictionary *_overrides;
}




+(id)resolvedSymbol:(id)arg0 error:(*id)arg1 ;
+(id)symbolicPathResolver;
-(id)init;
-(id)resolve:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;
-(void)overrideSymbol:(id)arg0 resolvedPath:(id)arg1 ;


@end


#endif