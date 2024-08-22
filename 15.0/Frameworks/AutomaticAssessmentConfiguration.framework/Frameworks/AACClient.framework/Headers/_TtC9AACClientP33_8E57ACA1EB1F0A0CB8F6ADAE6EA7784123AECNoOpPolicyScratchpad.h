// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9AACCLIENTP33_8E57ACA1EB1F0A0CB8F6ADAE6EA7784123AECNOOPPOLICYSCRATCHPAD_H
#define _TTC9AACCLIENTP33_8E57ACA1EB1F0A0CB8F6ADAE6EA7784123AECNOOPPOLICYSCRATCHPAD_H

@class SwiftObject;
@protocol AEPolicyReadOnlyScratchpad, AEPolicyWriteOnlyScratchpad, AEPersistable, AERemovable;



@interface _TtC9AACClientP33_8E57ACA1EB1F0A0CB8F6ADAE6EA7784123AECNoOpPolicyScratchpad : SwiftObject <AEPolicyReadOnlyScratchpad, AEPolicyWriteOnlyScratchpad, AEPersistable, AERemovable>





-(BOOL)persistWithError:(*id)arg0 ;
-(BOOL)removeWithError:(*id)arg0 ;
-(id)arrayForKey:(id)arg0 ;
-(id)numberForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(void)setArray:(id)arg0 forKey:(id)arg1 ;
-(void)setNumber:(id)arg0 forKey:(id)arg1 ;
-(void)setString:(id)arg0 forKey:(id)arg1 ;


@end


#endif