// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTTABLERESOLVERFACTORY_H
#define TSTTABLERESOLVERFACTORY_H

@class NSString;
@protocol TSCETableResolverFactoryProtocol, TSCEResolverLocatingProtocol;

#import <Foundation/Foundation.h>


@interface TSTTableResolverFactory : NSObject <TSCETableResolverFactoryProtocol, TSCEResolverLocatingProtocol>

 {
    *void _calcEngine;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(?)cellRefsForCategoryRefatRowUid;
-(?)unorderedCellRefsForCategoryRefatRowUid;
-(id)initWithCalcEngine:(*void)arg0 ;
-(id)resolverContainerMatchingName:(id)arg0 inDocumentRoot:(id)arg1 ;
-(id)resolverMatchingName:(id)arg0 inDocumentRoot:(id)arg1 contextResolver:(id)arg2 ;
-(id)resolverMatchingNameWithContextContainer:(id)arg0 inDocumentRoot:(id)arg1 contextContainerName:(id)arg2 ;
-(id)valueGridForCategoryRef:(id)arg0 atRowUid:(struct TSKUIDStruct *)arg1 hidingActionMask:(unsigned char)arg2 error:(*id)arg3 ;
-(struct TSCERangeRef )aggregateRangeRefForCategoryRef:(id)arg0 ;
-(struct TSCETableResolver *)newTableResolverForResolver:(id)arg0 ;
-(struct TSKUIDStruct )mapOwnerUID:(struct TSKUIDStruct *)arg0 ;
-(struct vector<TSCECategoryRef *, std::allocator<TSCECategoryRef *>> )categoryRefsForSpanningCategoryRef:(id)arg0 ;
-(struct vector<TSCEValue, std::allocator<TSCEValue>> )valuesForCategoryRef:(id)arg0 atRowUid:(struct TSKUIDStruct *)arg1 hidingActionMask:(unsigned char)arg2 error:(*id)arg3 ;
-(unsigned char)aggregateTypeForCategoryRef:(id)arg0 ;


@end


#endif