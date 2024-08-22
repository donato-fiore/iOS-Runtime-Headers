// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBFETCHCARDMETADATAACTION_H
#define AMSUIWEBFETCHCARDMETADATAACTION_H

@class NSNumber, NSString;


#import "AMSUIWebAction.h"

@interface AMSUIWebFetchCardMetadataAction : AMSUIWebAction

@property (retain, nonatomic) NSNumber *cardArtworkSize; // ivar: _cardArtworkSize
@property (retain, nonatomic) NSString *passTypeIdentifier; // ivar: _passTypeIdentifier
@property (retain, nonatomic) NSString *serialNumber; // ivar: _serialNumber


-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;


@end


#endif