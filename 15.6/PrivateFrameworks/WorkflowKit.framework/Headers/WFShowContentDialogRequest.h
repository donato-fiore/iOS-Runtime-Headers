// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSHOWCONTENTDIALOGREQUEST_H
#define WFSHOWCONTENTDIALOGREQUEST_H

@class NSData, WFContentCollection;
@protocol NSSecureCoding;


#import "WFDialogRequest.h"
#import "WFDialogButton.h"

@interface WFShowContentDialogRequest : WFDialogRequest <NSSecureCoding>



@property (copy, nonatomic) NSData *archivedContentCollection; // ivar: _archivedContentCollection
@property (retain, nonatomic) WFContentCollection *cachedContentCollection; // ivar: _cachedContentCollection
@property (readonly, copy, nonatomic) WFDialogButton *doneButton; // ivar: _doneButton


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentCollection:(id)arg0 attribution:(id)arg1 prompt:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getContentCollectionWithCompletionHandler:(id)arg0 ;


@end


#endif