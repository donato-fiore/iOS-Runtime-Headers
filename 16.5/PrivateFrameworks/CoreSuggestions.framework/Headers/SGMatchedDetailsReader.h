// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGMATCHEDDETAILSREADER_H
#define SGMATCHEDDETAILSREADER_H

@class NSData;

#import <Foundation/Foundation.h>


@interface SGMatchedDetailsReader : NSObject {
    NSData *_matchDetails;
    NSInteger _arrayCount;
    *unsigned int _phraseMatches;
}


@property (readonly, nonatomic) NSInteger columnCount; // ivar: _columnCount
@property (readonly, nonatomic) NSInteger phraseCount; // ivar: _phraseCount


-(BOOL)matchAtPhraseIndex:(NSInteger)arg0 columnIndex:(NSInteger)arg1 ;
-(id)initWithMatchedDetails:(id)arg0 ;


@end


#endif