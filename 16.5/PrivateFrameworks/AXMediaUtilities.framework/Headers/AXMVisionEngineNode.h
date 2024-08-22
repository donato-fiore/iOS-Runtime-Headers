// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXMVISIONENGINENODE_H
#define AXMVISIONENGINENODE_H

@class NSString;
@protocol NSSecureCoding, AXMDescribing, AXMVisionEngineNodeConnectionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AXMVisionEngineNode : NSObject <NSSecureCoding, AXMDescribing>



@property (readonly, nonatomic) BOOL areDiagnosticsEnabled;
@property (nonatomic, getter=isConnected) BOOL connected; // ivar: _connected
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXMVisionEngineNodeConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *nodeQueue; // ivar: _nodeQueue
@property (readonly, nonatomic) BOOL requiresVisionFramework;
@property (readonly) Class superclass;


+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)title;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(id)axmDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)axmAppendRecursiveDescription:(id)arg0 withIndentation:(NSInteger)arg1 ;
-(void)connect:(id)arg0 ;
-(void)disconnect;
-(void)encodeWithCoder:(id)arg0 ;
-(void)freeResources;
-(void)nodeInitialize;


@end


#endif