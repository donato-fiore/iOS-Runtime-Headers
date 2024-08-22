// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STMEDIACHANNEL_H
#define STMEDIACHANNEL_H

@class STSiriModelObject, NSString, NSURL;



@interface STMediaChannel : STSiriModelObject

@property (copy, nonatomic) NSString *callSign; // ivar: _callSign
@property (copy, nonatomic) NSString *channelIdentifier; // ivar: _channelIdentifier
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSURL *streamUrl; // ivar: _streamUrl


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif