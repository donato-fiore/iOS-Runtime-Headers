// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COREDAVPROPPATCHTASK_H
#define COREDAVPROPPATCHTASK_H

@class NSURL, NSSet;
@protocol CoreDAVPropPatchTaskDelegate;


#import "CoreDAVActionBackedTask.h"
#import "CoreDAVResponseItem.h"

@interface CoreDAVPropPatchTask : CoreDAVActionBackedTask {
    BOOL _sendOrder;
}


@property (nonatomic) int absoluteOrder; // ivar: _absoluteOrder
@property (weak, nonatomic) NSObject<CoreDAVPropPatchTaskDelegate> *delegate;
@property (retain, nonatomic) NSURL *priorOrderedURL; // ivar: _priorOrderedURL
@property (retain, nonatomic) NSSet *propPatchRemoveElements; // ivar: _propPatchRemoveElements
@property (retain, nonatomic) NSSet *propPatchSetElements; // ivar: _propPatchSetElements
@property (retain, nonatomic) CoreDAVResponseItem *responseItem; // ivar: _responseItem


-(id)additionalHeaderValues;
-(id)copyDefaultParserForContentType:(id)arg0 ;
-(id)description;
-(id)httpMethod;
-(id)initWithPropertiesToSet:(id)arg0 andRemove:(id)arg1 atURL:(id)arg2 ;
-(id)initWithURL:(id)arg0 ;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg0 ;


@end


#endif