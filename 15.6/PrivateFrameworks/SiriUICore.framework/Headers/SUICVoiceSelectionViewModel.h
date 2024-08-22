// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUICVOICESELECTIONVIEWMODEL_H
#define SUICVOICESELECTIONVIEWMODEL_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SUICVoiceSelectionViewModel : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSArray *languages; // ivar: _languages
@property (readonly, copy, nonatomic) NSArray *voices; // ivar: _voices


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithLanguages:(id)arg0 voices:(id)arg1 ;


@end


#endif