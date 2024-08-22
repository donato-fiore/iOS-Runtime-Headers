// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTABLEACCESSIBILITYELEMENTPROVIDER_H
#define ICTABLEACCESSIBILITYELEMENTPROVIDER_H

@class NSMutableDictionary, ICTable;

#import <Foundation/Foundation.h>

#import "ICTableAccessibilityController.h"

@interface ICTableAccessibilityElementProvider : NSObject

@property (retain, nonatomic) NSMutableDictionary *cellCache; // ivar: _cellCache
@property (weak, nonatomic) ICTableAccessibilityController *tableAXController; // ivar: _tableAXController
@property (readonly, nonatomic) ICTable *tableModel; // ivar: _tableModel


-(id)cellElementForColumnID:(id)arg0 rowID:(id)arg1 ;
-(id)cellElementsForColumnID:(id)arg0 ;
-(id)cellElementsForRowID:(id)arg0 ;
-(id)initWithTableAccessibilityController:(id)arg0 ;
-(void)removeElementsForColumnID:(id)arg0 ;
-(void)removeElementsForRowID:(id)arg0 ;


@end


#endif