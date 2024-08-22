// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STUPDATEWATCHLISTREQUEST_H
#define STUPDATEWATCHLISTREQUEST_H

@class AFSiriRequest, NSArray;



@interface STUpdateWatchListRequest : AFSiriRequest

@property (copy, nonatomic, setter=_setContentIdentifiersToAdd:) NSArray *contentIdentifiersToAdd; // ivar: _contentIdentifiersToAdd
@property (copy, nonatomic, setter=_setContentIdentifiersToRemove:) NSArray *contentIdentifiersToRemove; // ivar: _contentIdentifiersToRemove


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif