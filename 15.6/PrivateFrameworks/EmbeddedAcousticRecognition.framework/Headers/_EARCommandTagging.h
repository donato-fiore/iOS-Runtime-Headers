// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EARCOMMANDTAGGING_H
#define _EARCOMMANDTAGGING_H

@class NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _EARCommandTagging : NSObject <NSCopying>

 {
    unique_ptr<quasar::CommandTagging, std::default_delete<quasar::CommandTagging>> _tagging;
}


@property (readonly, copy, nonatomic) NSString *commandId; // ivar: _commandId
@property (readonly, copy, nonatomic) NSArray *tagSequence; // ivar: _tagSequence


-(id)_initWithQuasarCommandTagging:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)tokensForTag:(id)arg0 ;


@end


#endif