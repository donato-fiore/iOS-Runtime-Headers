// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSDOWNLOADMONITORITEM_H
#define SSDOWNLOADMONITORITEM_H

@class NSString;
@protocol SSXPCCoding;

#import <Foundation/Foundation.h>


@interface SSDownloadMonitorItem : NSObject <SSXPCCoding>



@property (copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger itemState; // ivar: _itemState
@property (copy, nonatomic) NSString *representativeTitle; // ivar: _representativeTitle
@property (copy, nonatomic) NSString *statusString; // ivar: _statusString
@property (readonly) Class superclass;
@property (nonatomic) NSInteger totalNumberOfItems; // ivar: _totalNumberOfItems
@property (nonatomic) NSUInteger transferTypes; // ivar: _transferTypes


-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)dealloc;


@end


#endif