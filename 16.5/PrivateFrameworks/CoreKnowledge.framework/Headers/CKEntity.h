// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKENTITY_H
#define CKENTITY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CKEntity : NSObject {
    ? identifier;
    ? store;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSInteger hash;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)linkTo:(id)arg0 withPredicate:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)linksTo:(id)arg0 matchType:(NSInteger)arg1 error:(*id)arg2 ;
-(id)valueForKey:(id)arg0 ;
-(void)linkTo:(id)arg0 withPredicate:(id)arg1 completionHandler:(id)arg2 ;
-(void)linksTo:(id)arg0 matchType:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)removeValueForKey:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeWithCompletionHandler:(id)arg0 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 completionHandler:(id)arg2 ;
-(void)setValuesForKeys:(id)arg0 completionHandler:(id)arg1 ;
-(void)unlinkTo:(id)arg0 withPredicate:(id)arg1 ignoreWeights:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)valueForKey:(id)arg0 completionHandler:(id)arg1 ;
-(void)valuesForKeys:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif