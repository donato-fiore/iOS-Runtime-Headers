// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHSPECIFICATION_H
#define PGGRAPHSPECIFICATION_H

@class MAGraphSpecification;



@interface PGGraphSpecification : MAGraphSpecification



-(Class)edgeClassWithLabel:(id)arg0 domain:(unsigned short)arg1 ;
-(Class)nodeClassWithLabel:(id)arg0 domain:(unsigned short)arg1 ;
-(id)edgeClassByDomain;
-(id)edgeClassByDomainAndLabel;
-(id)init;
-(id)nodeClassByDomain;
-(id)nodeClassByDomainAndLabel;
-(void)enumerateEdgeClassesUsingBlock:(id)arg0 ;
-(void)enumerateNodeClassesUsingBlock:(id)arg0 ;


@end


#endif