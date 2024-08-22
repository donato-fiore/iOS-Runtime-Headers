// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKMOREBUTTONLISTITEM_H
#define NTKMOREBUTTONLISTITEM_H

@class NSString;
@protocol NTKComplicationItem;

#import <Foundation/Foundation.h>


@interface NTKMoreButtonListItem : NSObject <NTKComplicationItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *ntk_contactIdentifier;
@property (readonly, nonatomic) NSString *ntk_identifier; // ivar: _ntk_identifier
@property (readonly, nonatomic) NSUInteger ntk_itemType;
@property (readonly, nonatomic) NSString *ntk_sectionIdentifier; // ivar: _ntk_sectionIdentifier
@property (readonly) Class superclass;


-(id)initWithSectionIdentifier:(id)arg0 ;
-(id)ntk_localizedNameWithOptions:(NSUInteger)arg0 forRichComplicationSlot:(BOOL)arg1 ;


@end


#endif