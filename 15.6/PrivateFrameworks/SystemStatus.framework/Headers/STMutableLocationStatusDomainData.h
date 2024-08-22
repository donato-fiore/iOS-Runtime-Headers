// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STMUTABLELOCATIONSTATUSDOMAINDATA_H
#define STMUTABLELOCATIONSTATUSDOMAINDATA_H

@class NSString, NSArray;
@protocol STMutableStatusDomainDataDifferencing, STMutableStatusDomainData;


#import "STLocationStatusDomainData.h"
#import "STMutableActivityAttributionCatalog.h"

@interface STMutableLocationStatusDomainData : STLocationStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>



@property (readonly, copy, nonatomic) STMutableActivityAttributionCatalog *attributionCatalog;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *locationAttributions;
@property (readonly) Class superclass;


-(BOOL)applyDiff:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAttributionCatalog:(id)arg0 ;
-(void)addLocationAttribution:(id)arg0 ;
-(void)removeLocationAttribution:(id)arg0 ;


@end


#endif