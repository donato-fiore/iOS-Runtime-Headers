// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIAPPDOCUMENTMANUALUPDATECONTEXT_H
#define VUIAPPDOCUMENTMANUALUPDATECONTEXT_H

@class NSDictionary, IKUpdateServiceRequest, NSString, IKViewElement;
@protocol VUIAppDocumentUpdateContext;

#import <Foundation/Foundation.h>


@interface VUIAppDocumentManualUpdateContext : NSObject <VUIAppDocumentUpdateContext>



@property (retain, nonatomic) NSDictionary *contextDictionary; // ivar: _contextDictionary
@property (retain, nonatomic) IKUpdateServiceRequest *currentUpdateRequest; // ivar: _currentUpdateRequest
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) IKViewElement *viewElement; // ivar: _viewElement


-(id)init;
-(id)initWithContextDictionary:(id)arg0 viewElement:(id)arg1 ;
-(void)updateCurrentUpdateRequestWithAppContext:(id)arg0 documentRef:(id)arg1 ;
-(void)updateRequestCompletedWithViewElements:(id)arg0 documentRef:(id)arg1 ;


@end


#endif