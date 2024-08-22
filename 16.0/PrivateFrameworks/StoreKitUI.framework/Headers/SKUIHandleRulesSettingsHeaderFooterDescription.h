// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIHANDLERULESSETTINGSHEADERFOOTERDESCRIPTION_H
#define SKUIHANDLERULESSETTINGSHEADERFOOTERDESCRIPTION_H



#import "SKUISettingsHeaderFooterDescription.h"
#import "SKUIClientContext.h"

@interface SKUIHandleRulesSettingsHeaderFooterDescription : SKUISettingsHeaderFooterDescription {
    SKUIClientContext *_clientContext;
}


@property (nonatomic) BOOL showInvalid; // ivar: _showInvalid


-(Class)_viewClassForSettingsHeaderFooterDescription:(id)arg0 ;
-(id)initWithClientContext:(id)arg0 ;
-(id)text;


@end


#endif