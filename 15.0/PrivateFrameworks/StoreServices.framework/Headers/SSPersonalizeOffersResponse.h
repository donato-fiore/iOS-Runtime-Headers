// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSPERSONALIZEOFFERSRESPONSE_H
#define SSPERSONALIZEOFFERSRESPONSE_H

@class NSMutableDictionary, NSArray, NSString;
@protocol SSXPCCoding;

#import <Foundation/Foundation.h>


@interface SSPersonalizeOffersResponse : NSObject <SSXPCCoding>

 {
    NSMutableDictionary *_actionDisplayNames;
    NSMutableDictionary *_actionParameters;
    NSArray *_items;
    NSMutableDictionary *_priceDisplayNames;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *personalizedItems;
@property (readonly) Class superclass;


-(id)actionDisplayNameForItemType:(id)arg0 ;
-(id)actionParametersForItemIdentifier:(id)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;
-(id)priceDisplayForItemType:(id)arg0 ;
-(void)dealloc;
-(void)setActionDisplayNameString:(id)arg0 forItemType:(id)arg1 ;
-(void)setActionParameters:(id)arg0 forItemIdentifier:(id)arg1 ;
-(void)setPriceDisplayString:(id)arg0 forItemType:(id)arg1 ;


@end


#endif