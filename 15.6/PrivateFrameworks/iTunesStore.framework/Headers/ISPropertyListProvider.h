// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISPROPERTYLISTPROVIDER_H
#define ISPROPERTYLISTPROVIDER_H

@protocol NSCopying;


#import "ISProtocolDataProvider.h"

@interface ISPropertyListProvider : ISProtocolDataProvider <NSCopying>





-(BOOL)processDialogFromPropertyList:(id)arg0 returningError:(*id)arg1 ;
-(BOOL)processPropertyList:(id)arg0 returningError:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif