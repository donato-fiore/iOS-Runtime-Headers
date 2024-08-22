// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MFDADEFERREDSETFLAGSOPERATION_H
#define _MFDADEFERREDSETFLAGSOPERATION_H

@class MFOfflineCacheOperation, NSString;



@interface _MFDADeferredSetFlagsOperation : MFOfflineCacheOperation {
    NSUInteger _onFlags;
    NSUInteger _offFlags;
    NSString *_messageID;
}




+(BOOL)supportsSecureCoding;
+(id)log;
-(BOOL)translateToLocalActionWithConnection:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif