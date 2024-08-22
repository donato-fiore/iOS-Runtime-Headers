// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKPERSISTENTSTOREHANDLER_H
#define CKPERSISTENTSTOREHANDLER_H


#import <Foundation/Foundation.h>


@interface CKPersistentStoreHandler : NSObject {
    ? connection;
}




+(id)inMemoryHandler;
-(BOOL)dropLinkWithLabel:(id)arg0 between:(id)arg1 and:(id)arg2 error:(*id)arg3 ;
-(BOOL)dropLinksBetween:(id)arg0 and:(id)arg1 error:(*id)arg2 ;
-(BOOL)dropLinksWithLabel:(id)arg0 from:(id)arg1 error:(*id)arg2 ;
-(BOOL)removeAllValuesAndReturnError:(*id)arg0 ;
-(BOOL)removeValueForKey:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeValuesForKeys:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeValuesMatching:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveKeysAndValues:(id)arg0 error:(*id)arg1 ;
-(BOOL)setWeightForLinkWithLabel:(id)arg0 between:(id)arg1 and:(id)arg2 toValue:(NSInteger)arg3 error:(*id)arg4 ;
-(NSInteger)decreaseWeightForLinkWithLabel:(id)arg0 between:(id)arg1 and:(id)arg2 ;
-(NSInteger)increaseWeightForLinkWithLabel:(id)arg0 between:(id)arg1 and:(id)arg2 ;
-(id)_valuesForKeys:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)keysAndReturnError:(*id)arg0 ;
-(id)keysAndValuesAndReturnError:(*id)arg0 ;
-(id)keysAndValuesForKeysMatching:(id)arg0 error:(*id)arg1 ;
-(id)keysMatching:(id)arg0 error:(*id)arg1 ;
-(id)tripleComponentsMatching:(id)arg0 error:(*id)arg1 ;
-(id)valuesAndReturnError:(*id)arg0 ;
-(id)valuesForKeysMatching:(id)arg0 error:(*id)arg1 ;


@end


#endif