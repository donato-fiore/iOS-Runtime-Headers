// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9PASSKITUI13TAXFORMSMODEL_H
#define _TTC9PASSKITUI13TAXFORMSMODEL_H

@protocol PKAccountServiceObserver;

#import <Foundation/Foundation.h>


@interface _TtC9PassKitUI13TaxFormsModel : NSObject <PKAccountServiceObserver>

 {
    ? _taxForms;
    ? _loading;
    ? accountService;
    ? accounts;
    ? taxFormIDToAccountID;
    ? exporter;
}




-(id)init;


@end


#endif