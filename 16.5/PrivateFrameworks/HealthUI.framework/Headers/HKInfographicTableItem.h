// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKINFOGRAPHICTABLEITEM_H
#define HKINFOGRAPHICTABLEITEM_H

@class NSString, NSAttributedString;
@protocol HKInfographicItem;

#import <Foundation/Foundation.h>


@interface HKInfographicTableItem : NSObject <HKInfographicItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL separatorHidden; // ivar: _separatorHidden
@property (readonly) Class superclass;
@property (retain, nonatomic) NSAttributedString *titleString; // ivar: _titleString
@property (retain, nonatomic) NSAttributedString *valueString; // ivar: _valueString


-(id)initWithTitle:(id)arg0 value:(id)arg1 ;
-(id)initWithTitle:(id)arg0 value:(id)arg1 separatorHidden:(BOOL)arg2 ;


@end


#endif