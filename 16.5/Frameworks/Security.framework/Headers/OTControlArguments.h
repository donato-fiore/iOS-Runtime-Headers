// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OTCONTROLARGUMENTS_H
#define OTCONTROLARGUMENTS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface OTControlArguments : NSObject <NSSecureCoding>



@property (retain) NSString *altDSID; // ivar: _altDSID
@property (retain) NSString *containerName; // ivar: _containerName
@property (retain) NSString *contextID; // ivar: _contextID


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithAltDSID:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithContainerName:(id)arg0 contextID:(id)arg1 altDSID:(id)arg2 ;
-(id)makeConfigurationContext;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif