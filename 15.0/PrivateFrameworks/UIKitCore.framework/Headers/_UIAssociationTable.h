// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIASSOCIATIONTABLE_H
#define _UIASSOCIATIONTABLE_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface _UIAssociationTable : NSObject {
    NSMapTable *_leftToRightHashTables;
    NSMapTable *_rightToLeftHashTables;
}




-(BOOL)hasLeftValuesForRightValue:(id)arg0 ;
-(BOOL)hasRightValuesForLeftValue:(id)arg0 ;
-(BOOL)isEmpty;
-(id)description;
-(id)initWithLeftValueOptions:(NSUInteger)arg0 rightValueOptions:(NSUInteger)arg1 ;
-(id)leftValueEnumerable;
-(id)leftValueEnumerableForRightValue:(id)arg0 ;
-(id)leftValues;
-(id)leftValuesForRightValue:(id)arg0 ;
-(id)rightValueEnumerable;
-(id)rightValueEnumerableForLeftValue:(id)arg0 ;
-(id)rightValues;
-(id)rightValuesForLeftValue:(id)arg0 ;
-(void)registerAssociationWithLeftValue:(id)arg0 rightValue:(id)arg1 ;
-(void)unregisterAssociationWithLeftValue:(id)arg0 rightValue:(id)arg1 ;


@end


#endif